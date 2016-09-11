int __fastcall sub_80EF624(_WORD *a1, _WORD *a2, signed int a3, unsigned __int8 a4, _WORD *a5)
{
  _WORD *v5; // r4@1
  unsigned int v6; // r1@3
  unsigned int v7; // r7@3
  unsigned int v8; // r6@3
  unsigned int v9; // r5@3
  int v10; // r1@3
  unsigned int v11; // r1@3
  int v12; // r10@3
  int v13; // r9@3
  int v14; // r8@3
  _WORD *v15; // r3@3
  int v16; // r4@3
  _WORD *v18; // [sp+0h] [bp-58h]@1
  _WORD *v19; // [sp+4h] [bp-54h]@1
  int v20; // [sp+Ch] [bp-4Ch]@1
  __int16 v21; // [sp+10h] [bp-48h]@1
  unsigned int v22; // [sp+14h] [bp-44h]@3
  int v23; // [sp+1Ch] [bp-3Ch]@3
  int v24; // [sp+20h] [bp-38h]@2
  int v25; // [sp+24h] [bp-34h]@3
  unsigned __int16 i; // [sp+28h] [bp-30h]@3
  unsigned int v27; // [sp+2Ch] [bp-2Ch]@2
  int v28; // [sp+54h] [bp-4h]@0

  v18 = a1;
  v19 = a2;
  v5 = a5;
  a3 = (unsigned __int8)a3;
  v20 = a4;
  v21 = 0;
  if ( a4 > 0u )
  {
    v24 = a3 - 1;
    v27 = a4 << 16;
    do
    {
      v6 = *v18;
      v7 = (v6 & 0x1F) << 8;
      v6 <<= 16;
      v8 = ((v6 >> 21) & 0x1F) << 8;
      v9 = ((v6 >> 26) & 0x1F) << 8;
      v10 = *v19;
      v22 = (v10 & 0x1F) << 8;
      v11 = v10 << 16;
      v23 = ((v11 >> 26) & 0x1F) << 8;
      v12 = (signed int)(v22 - v7) / a3;
      v13 = (signed int)((((v11 >> 21) & 0x1F) << 8) - v8) / a3;
      v14 = (signed int)(v23 - v9) / a3;
      v15 = v5;
      v16 = 0;
      v25 = (int)(v15 + 1);
      for ( i = v21 + 1; v16 < v24; v16 = (v16 + 1) & 0xFFFF )
      {
        *v15 = (v7 >> 8) | ((unsigned __int16)(v9 >> 8) << 10) | 32 * (v8 >> 8);
        v15 += v20;
        v7 += v12;
        v8 += v13;
        v9 += v14;
      }
      *v15 = (v22 >> 8) | 4 * v23 | 32 * ((v11 >> 21) & 0x1F);
      ++v18;
      ++v19;
      v5 = (_WORD *)v25;
      ++v21;
    }
    while ( i < v27 >> 16 );
  }
  return v28;
}
