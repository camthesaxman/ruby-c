int __fastcall sub_812C144(int a1)
{
  int v1; // r2@1
  int v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  if ( word_3004B06 )
    v2 = -(unsigned __int16)word_3004B04;
  else
    LOWORD(v2) = word_3004B04;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 48) = word_3004B08;
  *(_DWORD *)(v1 + 28) = sub_812C184;
  return v4;
}
