int __fastcall sub_80FA46C(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r9@1
  unsigned int v4; // r7@1
  int v5; // r10@1
  int v6; // r2@1
  unsigned int v7; // r5@2
  unsigned __int16 v8; // r8@2
  int v9; // r6@3
  int v10; // r4@4
  int v11; // r2@5
  int v12; // r3@5
  int v13; // r1@5
  int v15; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( a2 > 0u )
  {
    do
    {
      v7 = (v6 + 1) & 0xFFFF;
      v8 = v6 + 1;
      if ( v7 < v4 )
      {
        v9 = v3 + 8 * v6;
        do
        {
          v10 = v3 + 8 * v7;
          if ( atk90_changetypestoenemyattacktype(v3 + 8 * v7, v9, v5) << 24 )
          {
            v11 = *(_DWORD *)v10;
            v12 = *(_DWORD *)(v10 + 4);
            v13 = *(_DWORD *)(v9 + 4);
            *(_DWORD *)v10 = *(_DWORD *)v9;
            *(_DWORD *)(v10 + 4) = v13;
            *(_DWORD *)v9 = v11;
            *(_DWORD *)(v9 + 4) = v12;
          }
          v7 = (v7 + 1) & 0xFFFF;
        }
        while ( v7 < v4 );
      }
      v6 = v8;
    }
    while ( v8 < v4 );
  }
  return v15;
}
