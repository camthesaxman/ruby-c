int __fastcall sub_806D37C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_809D638();
  if ( *(_WORD *)(v1 + 36) == *(_WORD *)(v1 + 50) )
  {
    *(_WORD *)(v1 + 46) = -*(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 50) = 0;
    *(_DWORD *)(v1 + 28) = sub_806DA38;
  }
  else
  {
    *(_WORD *)(v1 + 36) += *(_WORD *)(v1 + 46);
  }
  return v3;
}
