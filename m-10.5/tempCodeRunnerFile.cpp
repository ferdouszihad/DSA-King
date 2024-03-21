curr = tail;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->prev;
    }
    cout << endl;