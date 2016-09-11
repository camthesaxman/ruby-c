int __fastcall sub_807BA24(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int *v3; // r5@1
  __int16 v4; // r0@1
  __int16 v5; // r0@2
  int v6; // r12@3
  _WORD *v7; // r1@3
  __int16 v8; // r4@3
  _WORD *v9; // r2@3
  __int16 v10; // r0@3
  __int16 v11; // r0@4
  int v13; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)IndexOfSpritePaletteTag(0x271Au);
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 5);
  *((_WORD *)v3 + 5) = v4 + 1;
  if ( v4 > 13 )
  {
    v5 = *((_WORD *)v3 + 6) + 1;
    *((_WORD *)v3 + 6) = v5;
    if ( v5 == 3 )
    {
      v6 = 16 * v2;
      v7 = (_WORD *)(2 * (16 * v2 + 269) + 33746632);
      v8 = *(_WORD *)(2 * (16 * v2 + 269) + 0x202EEC8);
      v9 = (_WORD *)(2 * (16 * v2 + 270) + 33746632);
      *v7 = *v9;
      *v9 = *(_WORD *)(2 * (v6 + 271) + 0x202EEC8);
      *(_WORD *)(2 * (v6 + 271) + 0x202EEC8) = v8;
      *((_WORD *)v3 + 6) = 0;
      v10 = *((_WORD *)v3 + 7) + 1;
      *((_WORD *)v3 + 7) = v10;
      if ( v10 == 3 )
      {
        *((_WORD *)v3 + 7) = 0;
        *((_WORD *)v3 + 5) = 0;
        v11 = *((_WORD *)v3 + 8) + 1;
        *((_WORD *)v3 + 8) = v11;
        if ( v11 == 2 )
        {
          *((_WORD *)v3 + 5) = 9;
          *v3 = (int)sub_807BAD4;
        }
      }
    }
  }
  return v13;
}
