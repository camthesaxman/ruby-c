int __fastcall sub_804A96C(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  int v7; // r10@1
  int v8; // r6@1
  int v9; // r2@1
  int v10; // r8@2
  signed int v11; // r4@3
  int v12; // r6@3
  _WORD *v13; // r3@4
  _WORD *v14; // r2@4
  int v16; // [sp+20h] [bp-4h]@0

  v7 = a4;
  a2 = (unsigned __int8)a2;
  v8 = a3;
  v9 = 0;
  if ( (signed int)a6 > 0 )
  {
    v10 = 32 * v8 + a2;
    do
    {
      v11 = 0;
      v12 = v9 + 1;
      if ( (signed int)a5 > 0 )
      {
        v13 = (_WORD *)(2 * a5 * v9 + v7);
        v14 = (_WORD *)(2 * (32 * v9 + v10) + a1 + 18);
        do
        {
          *v14 = a7 | *v13;
          ++v13;
          ++v14;
          ++v11;
        }
        while ( v11 < a5 );
      }
      v9 = v12;
    }
    while ( v12 < a6 );
  }
  *(_BYTE *)(a1 + 16) = 1;
  return v16;
}
