#include <cmath>
#include <vector>

#include <iostream>
using namespace std;



vector<vector<double>> top_relaxation(int _N, int _M, vector<double> _xs, vector<double> _ys, double _w, int _n_max, double _eps)
{
    int N, M, n_max;
    double w, eps, h2, k2, a2;
    vector<double> xs;
    vector<double> ys;
    vector<vector<double>> grid;

    N = _N;
    M = _M;
    n_max = _n_max;
    w = _w;
    eps = _eps;
    xs = _xs;
    ys = _ys;
    h2 = N * N / 4;
    k2 = M * M / 4;
    a2 = -2 * (h2 + k2);


    //resize grid and approximate
    grid.resize(M+2);
    for (int j = 0; j < M+2; j++)
    {
        grid[j].resize(N+1);
        for (int i = 0; i < N+1; i++)
        {
            grid[j][i] = 0;
        }
    }


    //solve Left Right Columns
    for (int j = 0; j < M + 1; j++)
    {
        grid[j][N] = exp(ys[j]) * (1.0 - ys[j] * ys[j]);
        grid[j][0] = 1.0 - ys[j] * ys[j];
    }

    //solve Bottom Top Rows
    for (int i = 0; i < N + 1; i++)
    {
        grid[M][i] = 1.0 - xs[i] * xs[i];
        grid[0][i] = 1.0 - xs[i] * xs[i];
    }

    //solve Centre of grid
    int n = 0;
    double eps_n = 0;
    while (true)
    {
        double eps_max = 0;

        for (int j = 1; j < M; j++)
        {
            for (int i = 1; i < N; i++)
            {
                double v_old = grid[j][i];

                double temp = a2 * v_old + h2 * (grid[j][i + 1] + grid[j][i - 1]) + k2 * (grid[j + 1][i] + grid[j - 1][i]);
                double v_new = v_old - w * (temp + abs(xs[i] * xs[i] - ys[j] * ys[j])) / a2;

                grid[j][i] = v_new;

                double eps_curr = abs(v_old - v_new);
                if (eps_curr > eps_max)
                {
                    eps_max = eps_curr;
                };
            }
        }

        n++;
        if ((eps_max < eps) || (n >= n_max))
        {
            eps_n = eps_max;
            break;
        };
    }

    double R_max = 0;
    for (int j = 1; j < M; j++)
    {
        for (int i = 1; i < N; i++)
        {
            double R = abs(a2 * grid[j][i] + h2 * (grid[j][i + 1] + grid[j][i - 1]) + k2 * (grid[j + 1][i] + grid[j - 1][i])
                + abs(xs[i] * xs[i] - ys[j] * ys[j]));
            if (R > R_max) R_max = R;
        }
    }

    grid[M + 1][0] = double(n);
    grid[M + 1][1] = eps_n;
    grid[M + 1][2] = R_max;

    return grid;
}


vector<vector<double>> top_relaxation_test(int _N, int _M, vector<double> _xs, vector<double> _ys, double _w, int _n_max, double _eps)
{
    int N, M, n_max;
    double w, eps, h2, k2, a2;
    vector<double> xs;
    vector<double> ys;
    vector<vector<double>> grid;

    N = _N;
    M = _M;
    n_max = _n_max;
    w = _w;
    eps = _eps;
    xs = _xs;
    ys = _ys;
    h2 = N * N / 4;
    k2 = M * M / 4;
    a2 = -2 * (h2 + k2);


    //resize grid from bottom to top from left to right and approximate
    grid.resize(M + 2);
    for (int j = 0; j < M + 2; j++)
    {
        grid[j].resize(N + 1);
        for (int i = 0; i < N + 1; i++)
        {
            grid[j][i] = 0;
        }
    }


    //solve Left Right Columns
    for (int j = 0; j < M + 1; j++)
    {
        grid[j][N] = exp(-ys[j] * ys[j]);
        grid[j][0] = exp(-ys[j] * ys[j]);
    }

    //solve Bottom Top Rows
    for (int i = 0; i < N + 1; i++)
    {
        grid[M][i] = exp(-xs[i] * xs[i]);
        grid[0][i] = exp(-xs[i] * xs[i]);
    }

    //solve Centre of grid
    int n = 0;
    double eps_n = 0;
    while (true)
    {
        double eps_max = 0;

        for (int j = 1; j < M; j++)
        {
            for (int i = 1; i < N; i++)
            {
                double v_old = grid[j][i];

                double temp = a2 * v_old + h2 * (grid[j][i + 1] + grid[j][i - 1]) + k2 * (grid[j + 1][i] + grid[j - 1][i]);
                double v_new = v_old - w * (temp + 4.0 * (1.0 - xs[i] * xs[i] - ys[j] * ys[j]) * exp(1.0 - xs[i] * xs[i] - ys[j] * ys[j])) / a2;

                grid[j][i] = v_new;

                double eps_curr = abs(v_old - v_new);
                if (eps_curr > eps_max)
                {
                    eps_max = eps_curr;
                };
            }
        }

        n++;
        if ((eps_max < eps) || (n >= n_max))
        {
            eps_n = eps_max;
            break;
        };
    }

    double R_max = 0;
    for (int j = 1; j < M; j++)
    {
        for (int i = 1; i < N; i++)
        {
            double R = abs(a2 * grid[j][i] + h2 * (grid[j][i + 1] + grid[j][i - 1]) + k2 * (grid[j + 1][i] + grid[j - 1][i])
                + 4.0 * exp(1.0 - xs[i] * xs[i] - ys[j] * ys[j]) * (1.0 - xs[i] * xs[i] - ys[j] * ys[j]));
            if (R > R_max) R_max = R;
        }
    }

    grid[M + 1][0] = double(n);
    grid[M + 1][1] = eps_n;
    grid[M + 1][2] = R_max;

    return grid;
}

int main()
{
    vector<vector<double>> grid;
    vector<double> xs;
    vector<double> ys;
    xs.resize(101);
    ys.resize(101);

    double k = -1.0;
    for(int i = 0; i < 100+1; i++)
    {
        xs[i] = k;
        ys[i] = k;
        k += 0.02;
    }

    grid = top_relaxation(100, 100, xs, ys, 1.9, 10000, 5 * pow(10, -10));
    cout << "Iterations = " << grid[101][0] << endl
        << "Eps(method) = " << grid[101][1] << endl
        << "R = " << grid[101][2] << endl;

    cout << "v table:" << endl;

    for (int j = 48; j < 52 + 1; j++)
    {
        for (int i = 48; i < 52 + 1; i++)
        {
            cout.width(9);
            cout << grid[100-j][i] << " ";
        }
        cout << endl;
    }

    //cout << "u(0, 0) = " << exp(1 - xs[50] * xs[50] - ys[50] * ys[50]);
    //cout << endl;
    //cout << grid[50][50] - exp(1 - xs[50] * xs[50] - ys[50] * ys[50]) << endl;

    return 0;
}
/*
*/