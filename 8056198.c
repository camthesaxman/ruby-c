int __fastcall sub_8056198(int a1, int **a2, int a3)
{
  int v3; // r4@2
  int v4; // r2@2
  int v5; // r6@3
  int v6; // r2@3
  int v7; // r3@3
  int v9; // [sp+1Ch] [bp-4h]@0

  if ( a2 )
  {
    v3 = **a2;
    v4 = a3 + 7;
    if ( v4 >= 0 )
    {
      v5 = 0;
      v7 = dword_3004870 - v4;
      if ( v4 + v3 < dword_3004870 )
        v7 = **a2;
    }
    else
    {
      v5 = -v4;
      v6 = v4 + v3;
      v7 = dword_3004870;
      if ( v6 < dword_3004870 )
        v7 = v6;
      v4 = 0;
    }
    sub_8056134(v4, *(_DWORD *)(*(_DWORD *)a1 + 4) + 7, a2, v5, 0, v7, 7);
  }
  return v9;
}
