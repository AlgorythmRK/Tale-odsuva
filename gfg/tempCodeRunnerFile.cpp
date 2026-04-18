

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == 67)
                found = true;
        }

        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}