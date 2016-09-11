int __fastcall sub_811003C(int a1)
{
  int v1; // r8@1
  signed int v2; // r0@1
  int v3; // r2@2
  int v4; // r9@2
  int v5; // r6@3
  int v6; // r5@3
  int v7; // ST10_4@4
  int v8; // r4@4
  int v9; // r0@4
  int v10; // ST00_4@5
  int v11; // ST04_4@5
  int v12; // ST08_4@5
  int v13; // ST0C_4@5
  int v14; // r4@5
  int v15; // r7@5
  int v17; // [sp+2Ch] [bp-4h]@0

  v1 = a1;
  v2 = 4;
  do
  {
    v3 = v2 - 1;
    v4 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      v5 = v1 + 16 * v2;
      v6 = 16 * v3 + v1;
      do
      {
        v7 = v3;
        v8 = sub_810FFDC(v5);
        v9 = sub_810FFDC(v6);
        v3 = v7;
        if ( v8 > v9 )
        {
          v10 = *(_DWORD *)v5;
          v11 = *(_DWORD *)(v5 + 4);
          v12 = *(_DWORD *)(v5 + 8);
          v13 = *(_DWORD *)(v5 + 12);
          v14 = *(_DWORD *)(v6 + 4);
          v15 = *(_DWORD *)(v6 + 8);
          *(_DWORD *)v5 = *(_DWORD *)v6;
          *(_DWORD *)(v5 + 4) = v14;
          *(_DWORD *)(v5 + 8) = v15;
          *(_DWORD *)(v5 + 12) = *(_DWORD *)(v6 + 12);
          *(_DWORD *)v6 = v10;
          *(_DWORD *)(v6 + 4) = v11;
          *(_DWORD *)(v6 + 8) = v12;
          *(_DWORD *)(v6 + 12) = v13;
        }
        v6 -= 16;
        --v4;
      }
      while ( v4 >= 0 );
    }
    v2 = v3;
  }
  while ( v3 > 0 );
  return v17;
}
