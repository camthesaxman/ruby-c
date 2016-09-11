int __fastcall sub_8098C48(unsigned __int8 a1, int a2, _BYTE *a3)
{
  unsigned int *v3; // r6@1
  int v4; // r8@1
  int v5; // r7@1
  unsigned int v6; // r5@2
  unsigned __int16 v7; // r9@2
  _BYTE *v8; // r2@3
  int v9; // r4@3
  unsigned int v10; // r0@4
  int v11; // r0@4
  int v13; // [sp+20h] [bp-4h]@0

  v3 = (unsigned int *)(2400 * a1 + 33751204);
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = 0;
    v7 = v5 + 1;
    do
    {
      v9 = (unsigned __int16)GetBoxMonData(v3, 65, a3);
      if ( v9 )
      {
        v10 = GetBoxMonData(v3, 0, v8);
        v11 = sub_8099AFC(v9, v10, (signed int)(1572864 * v6 + 6553600) >> 16, (1572864 * v5 + 2883584) >> 16);
        a3 = (_BYTE *)(4 * v4);
        *(_DWORD *)(4 * v4 + 0x2001050) = v11;
      }
      else
      {
        a3 = (_BYTE *)v4;
        *(_DWORD *)(4 * v4 + 0x2001050) = 0;
      }
      v3 += 20;
      v4 = (v4 + 1) & 0xFFFF;
      v6 = (v6 + 1) & 0xFFFF;
    }
    while ( v6 <= 5 );
    v5 = (unsigned __int16)(v5 + 1);
  }
  while ( v7 <= 4u );
  return v13;
}
