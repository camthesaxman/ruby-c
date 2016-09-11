int __fastcall sub_80DCFE4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B0C )
    sub_8078764(a1, 0);
  else
    sub_80787B0(a1, 0);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 48) = word_3004B04;
  *(_WORD *)(v1 + 50) = word_3004B08;
  *(_WORD *)(v1 + 52) = word_3004B0A;
  *(_DWORD *)(v1 + 28) = sub_80DD02C;
  return v3;
}
