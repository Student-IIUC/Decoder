for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < original.size(); j++)
            {
                if (S[i] == key[j])
                {
                    S[i] = original[j];
                }
            }
        }