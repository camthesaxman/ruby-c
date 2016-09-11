int __fastcall sub_80D8874(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  unsigned __int8 v3; // r0@8
  __int16 v4; // r0@11
  __int16 v5; // r0@11
  __int16 v6; // r3@17
  int v7; // r1@18
  unsigned __int8 v8; // r0@20
  char *v9; // r1@22
  char v10; // r0@22
  __int16 v11; // r0@26
  __int16 v12; // r0@26
  signed __int16 v13; // r0@28
  int v15; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60) & 0xFF;
  if ( v2 == 1 )
  {
    sub_8078B5C(a1);
    *(_WORD *)(v1 + 36) += gSineTable[*(_WORD *)(v1 + 56)] >> 3;
    *(_WORD *)(v1 + 38) += -3 * gSineTable[*(_WORD *)(v1 + 56) + 64] >> 8;
    if ( byte_3001BAD & 2 )
    {
      v6 = *(_WORD *)(v1 + 56);
      if ( ((*(_WORD *)(v1 + 56) - 64) & 0xFFFFu) > 0x7F )
        LOBYTE(v7) = ((unsigned int)*(_WORD *)(v1 + 60) << 16 >> 24) + 1;
      else
        v7 = *(_WORD *)(v1 + 60) << 16 >> 24;
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (v7 & 3);
      v8 = v6 + 4;
    }
    else
    {
      if ( ((*(_WORD *)(v1 + 56) - 64) & 0xFFFFu) > 0x7F )
      {
        v9 = (char *)(v1 + 67);
        v10 = -116;
      }
      else
      {
        v9 = (char *)(v1 + 67);
        v10 = -128;
      }
      *v9 = v10;
      v8 = *(_WORD *)(v1 + 56) - 4;
    }
    *(_WORD *)(v1 + 56) = v8;
    if ( (signed int)*(_WORD *)(v1 + 46) <= 0 )
    {
      *(_WORD *)(v1 + 46) = 768;
      v11 = *(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32);
      *(_WORD *)(v1 + 32) = v11;
      *(_WORD *)(v1 + 48) = v11;
      v12 = *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34);
      *(_WORD *)(v1 + 34) = v12;
      *(_WORD *)(v1 + 52) = v12;
      *(_WORD *)(v1 + 54) = v12 + 4;
      if ( byte_3001BAD & 2 && *(_BYTE *)(v202F7C9 + 0x2024A72) & 1 )
        v13 = 256;
      else
        v13 = -16;
      *(_WORD *)(v1 + 50) = v13;
      ++*(_WORD *)(v1 + 60);
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 36) = 0;
      sub_8078BD4(v1);
    }
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 && sub_8078B5C(a1) << 24 )
    {
      if ( *(_BYTE *)(v1 + 1) & 1 )
      {
        FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
        *(_BYTE *)(v1 + 1) &= 0xFCu;
      }
      DestroySprite(v1);
      --v202F7B2;
    }
  }
  else if ( !v2 )
  {
    sub_8078B5C(a1);
    *(_WORD *)(v1 + 36) += gSineTable[*(_WORD *)(v1 + 56)] >> 4;
    v3 = *(_WORD *)(v1 + 58) ? *(_WORD *)(v1 + 56) - 8 : *(_WORD *)(v1 + 56) + 8;
    *(_WORD *)(v1 + 56) = v3;
    if ( (signed int)*(_WORD *)(v1 + 46) <= 0 )
    {
      *(_WORD *)(v1 + 46) = 80;
      v4 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
      *(_WORD *)(v1 + 32) = v4;
      *(_WORD *)(v1 + 48) = v4;
      *(_WORD *)(v1 + 50) = v4;
      v5 = *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 34);
      *(_WORD *)(v1 + 34) = v5;
      *(_WORD *)(v1 + 52) = v5;
      *(_WORD *)(v1 + 54) = v5 + 29;
      ++*(_WORD *)(v1 + 60);
      if ( byte_3001BAD & 2 && *(_BYTE *)(v202F7C9 + 0x2024A72) & 1 )
        *(_WORD *)(v1 + 56) = 204;
      else
        *(_WORD *)(v1 + 56) = 80;
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 36) = gSineTable[*(_WORD *)(v1 + 56)] >> 3;
      *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 2) & 0xFF;
      obj_translate_based_on_private_1_2_3_4(v1);
    }
  }
  return v15;
}
