int __fastcall InsertTask(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int *v3; // r0@2
  int *v4; // r2@3
  int v5; // r5@4
  int *v6; // r3@4
  int *v7; // r0@10
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = FindFirstActiveTask() & 0xFF;
  if ( v2 == 16 )
  {
    v3 = &dword_3004B20[10 * v1];
    *((_BYTE *)v3 + 5) = -2;
    *((_BYTE *)v3 + 6) = -1;
  }
  else
  {
    v4 = &dword_3004B20[10 * v1];
    while ( 1 )
    {
      v5 = 10 * v2;
      v6 = &dword_3004B20[10 * v2];
      if ( *((_BYTE *)v4 + 7) < (unsigned int)*((_BYTE *)v6 + 7) )
        break;
      if ( *((_BYTE *)v6 + 6) == 255 )
      {
        v7 = &dword_3004B20[10 * v1];
        *((_BYTE *)v7 + 5) = v2;
        *((_BYTE *)v7 + 6) = BYTE2(dword_3004B20[v5 + 1]);
        BYTE2(dword_3004B20[v5 + 1]) = v1;
        return v9;
      }
      v2 = *((_BYTE *)v6 + 6);
    }
    *((_BYTE *)v4 + 5) = *((_BYTE *)v6 + 5);
    *((_BYTE *)v4 + 6) = v2;
    if ( *((_BYTE *)v6 + 5) != 254 )
      BYTE2(dword_3004B20[10 * *((_BYTE *)v6 + 5) + 1]) = v1;
    *((_BYTE *)v6 + 5) = v1;
  }
  return v9;
}
