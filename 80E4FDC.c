int __fastcall unref_sub_80E4FDC(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4, unsigned __int8 a5, int a6, unsigned __int8 a7, int a8)
{
  int v8; // r12@1
  int v9; // r4@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r9@2
  int v13; // r5@3
  _WORD *v14; // r1@5
  signed int v15; // r2@5
  int v17; // [sp+20h] [bp-4h]@0

  v8 = a1;
  v40000D4 = *(int *)((char *)gUnknown_081FAF4C + (4 * a3 & 0x3FF)) + ((a4 << 11) & 0x7FFFF);
  v40000D8 = (unsigned __int16)a6 + 100663296;
  v40000DC = -2147482624;
  v9 = ((unsigned int)(a6 << 16) >> 21) - ((a8 << 9) & 0x1FFFF);
  v10 = a2;
  v11 = a2 + 8;
  if ( v10 < v11 )
  {
    v12 = v11;
    do
    {
      v13 = v10 + 1;
      if ( __OFSUB__(v8, v8 + 8) ^ 1 )
      {
        v14 = (_WORD *)(2 * v8 + (a7 << 11) + (v10 << 6) + 100663296);
        v15 = 8;
        do
        {
          *v14 = v9++ | (a5 << 12);
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      ++v10;
    }
    while ( v13 < v12 );
  }
  return v17;
}
