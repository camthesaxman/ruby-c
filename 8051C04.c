int __fastcall sub_8051C04(int result)
{
  int v1; // r2@1

  v1 = dword_3004854;
  *(_WORD *)(result + 36) = -*(_WORD *)(dword_3004854 + 324);
  *(_WORD *)(result + 38) = -*(_WORD *)(v1 + 326);
  return result;
}
