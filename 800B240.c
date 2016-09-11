int __fastcall sub_800B240(int result)
{
  int v1; // r1@1

  v1 = (*(_WORD *)(result + 34) << 16) + *(_WORD *)(result + 46) + 49152;
  *(_WORD *)(result + 34) = HIWORD(v1);
  *(_WORD *)(result + 46) = v1;
  return result;
}
