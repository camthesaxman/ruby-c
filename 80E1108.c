int __fastcall sub_80E1108(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r1@2
  int (*v3)(); // r0@4
  __int16 v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF) + 1) & 0x3FF;
  if ( word_3004B00[0] )
  {
    *(_WORD *)(a1 + 32) = word_3004B02;
    v4 = word_3004B04;
    *(_WORD *)(v1 + 34) = word_3004B04;
    *(_WORD *)(v1 + 38) = -v4;
    v3 = sub_80E11D4;
  }
  else
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + word_3004B02;
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + word_3004B04;
    v2 = -1;
    if ( word_3004B02 > 0 )
      v2 = 1;
    *(_WORD *)(v1 + 46) = v2;
    v3 = sub_80E1198;
  }
  *(_DWORD *)(v1 + 28) = v3;
  return v6;
}
