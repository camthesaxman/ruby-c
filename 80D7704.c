int __fastcall sub_80D7704(int a1)
{
  int v1; // r5@1
  int v2; // r9@1
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r3@1
  int v6; // r4@3
  int v7; // r1@4
  int v8; // r7@6
  int v9; // r4@6
  int v10; // r1@7
  unsigned int i; // r0@7
  int v12; // r1@8
  signed int v13; // r2@10
  int v15; // [sp+0h] [bp-24h]@1
  int v16; // [sp+20h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF) + 7) & 0x3FF;
  v2 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  v15 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v4 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = word_3004B00[0] + v15;
  *(_WORD *)(v1 + 50) = v2 + word_3004B04;
  *(_WORD *)(v1 + 52) = word_3004B02 + v4;
  *(_WORD *)(v1 + 54) = v3 + word_3004B06;
  sub_8078314(v1);
  LOWORD(v5) = v15;
  if ( (unsigned int)(v2 + 32) <= 0x130 && (unsigned int)(v3 + 32) <= 0xE0 )
  {
    v6 = *(_WORD *)(v1 + 48);
    do
    {
      v7 = ((signed __int16)v2 + v6) << 16;
      v3 = ((signed __int16)v3 + *(_WORD *)(v1 + 50)) & 0xFFFF;
      v2 = ((signed __int16)v2 + v6) & 0xFFFF;
    }
    while ( (unsigned int)(v7 + 0x200000) >> 16 <= 0x130 && (unsigned int)((v3 << 16) + 0x200000) >> 16 <= 0xE0 );
  }
  v8 = -*(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v8;
  v9 = -*(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 50) = v9;
  if ( (unsigned int)((v15 << 16) + 0x200000) >> 16 <= 0x130 )
  {
    v10 = v4 << 16;
    for ( i = (v4 << 16) + 0x200000; ; i = (((v13 >> 16) + v9) << 16) + 0x200000 )
    {
      v13 = v10;
      if ( i >> 16 > 0xE0 )
        break;
      v12 = ((signed __int16)v5 + v8) << 16;
      v4 = ((v13 >> 16) + v9) & 0xFFFF;
      v5 = ((signed __int16)v5 + v8) & 0xFFFF;
      if ( (unsigned int)(v12 + 0x200000) >> 16 > 0x130 )
        break;
      v10 = ((v13 >> 16) + v9) << 16;
    }
  }
  *(_WORD *)(v1 + 32) = v5;
  *(_WORD *)(v1 + 34) = v4;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = v5;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 52) = v4;
  *(_WORD *)(v1 + 54) = v3;
  sub_8078314(v1);
  *(_WORD *)(v1 + 52) = word_3004B0A;
  *(_WORD *)(v1 + 54) = word_3004B0C;
  *(_DWORD *)(v1 + 28) = sub_80D7888;
  return v16;
}
