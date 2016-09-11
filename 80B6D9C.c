int __fastcall sub_80B6D9C(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-4h]@4

  v1 = a1;
  memcpy(&v4, &gUnknown_083CE2D0, 8);
  v2 = *(_WORD *)(v1 + 46);
  if ( !*(_WORD *)(v1 + 46) || (*(_WORD *)(v1 + 46) = v2 - 1, !((v2 - 1) << 16)) )
  {
    *(_WORD *)(v1 + 46) = 8;
    *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 1) & 3;
  }
  *(_WORD *)(v1 + 36) = *((_WORD *)&v4 + *(_WORD *)(v1 + 48));
  return v5;
}
