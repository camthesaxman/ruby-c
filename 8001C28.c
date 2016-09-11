int __fastcall AffineAnimCmd_frame(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-14h]@1
  char v5; // [sp+5h] [bp-Fh]@1
  int v6; // [sp+10h] [bp-4h]@1

  v2 = a1;
  GetAffineAnimFrame(a1, a2, &v4);
  ApplyAffineAnimFrame(v2, &v4);
  sAffineAnimStates[12 * v2 + 2] = v5;
  return v6;
}
