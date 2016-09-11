int __fastcall sub_8056ABC(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  int v6; // r5@1
  unsigned int v7; // r0@1
  signed int v8; // r4@1
  signed int v9; // r6@1
  int **v10; // r0@1
  int v11; // r1@3
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r0@3

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a1 << 24;
  v8 = v7 >> 24;
  v9 = v7 >> 24;
  v10 = (int **)mapconnection_get_mapheader(a4);
  if ( v8 >= 1 )
  {
    if ( v8 <= 2 )
    {
      v11 = *v202E828;
      v12 = **v10;
      v13 = *(_DWORD *)(v6 + 4);
      v14 = v4;
      return (unsigned __int8)sub_8056B20(v14, v11, v12, v13);
    }
    if ( v9 <= 4 )
    {
      v11 = *(_DWORD *)(v202E828 + 4);
      v12 = (*v10)[1];
      v13 = *(_DWORD *)(v6 + 4);
      v14 = v5;
      return (unsigned __int8)sub_8056B20(v14, v11, v12, v13);
    }
  }
  return 0;
}
