int __fastcall sub_812CAFC(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r0@4
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !word_3004B06 )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
  }
  *(_WORD *)(v1 + 32) += word_3004B00[0];
  *(_WORD *)(v1 + 34) += word_3004B02;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16) & 0x3FF;
  if ( word_3004B04 )
  {
    *(_WORD *)(v1 + 36) = 12;
    v2 = -2;
  }
  else
  {
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
    *(_WORD *)(v1 + 36) = -12;
    v2 = 2;
  }
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 46) = word_3004B08;
  if ( *(_WORD *)(v1 + 52) != 255 )
    *(_WORD *)(v1 + 52) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_812CBB4;
  return v4;
}
