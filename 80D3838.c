int __fastcall sub_80D3838(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B06 )
    sub_8078764(a1, 1);
  else
    sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 60) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80D3874;
  return v3;
}
