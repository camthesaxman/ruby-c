int __fastcall sub_80520CC(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r9@1
  int v4; // r0@1
  signed int v5; // r5@2
  int v6; // r8@2
  _BYTE *v7; // r6@3
  int v8; // r4@4
  int v9; // r3@4
  int v11; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  if ( (signed int)a2 > 0 )
  {
    do
    {
      v5 = 0;
      v6 = v4 + 1;
      if ( (signed int)a2 > 0 )
      {
        v7 = (_BYTE *)(v3 + v4);
        do
        {
          v8 = *v7;
          v9 = *(_BYTE *)(v3 + v5);
          if ( *(_DWORD *)(4 * v8 + a3) > *(_DWORD *)(4 * v9 + a3) )
          {
            *v7 = v9;
            *(_BYTE *)(v3 + v5) = v8;
          }
          ++v5;
        }
        while ( v5 < a2 );
      }
      ++v4;
    }
    while ( v6 < a2 );
  }
  return v11;
}
