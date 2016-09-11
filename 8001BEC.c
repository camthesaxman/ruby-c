int __fastcall AffineAnimCmd_end(int a1, int a2)
{
  int v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+4h] [bp-8h]@1
  int v5; // [sp+8h] [bp-4h]@1

  a1 = (unsigned __int8)a1;
  v3 = 0;
  v4 = 0;
  *(_BYTE *)(a2 + 63) |= 0x20u;
  --sAffineAnimStates[12 * a1 + 1];
  ApplyAffineAnimFrameRelativeAndUpdateMatrix((unsigned __int8)a1, &v3);
  return v5;
}
