int __fastcall ApplyAffineAnimFrame(unsigned __int8 a1, int a2)
{
  unsigned __int8 v2; // r4@1
  char v3; // r0@1
  int v5; // [sp+0h] [bp-10h]@1
  int v6; // [sp+4h] [bp-Ch]@1
  int v7; // [sp+Ch] [bp-4h]@4

  v2 = a1;
  v5 = 0;
  v6 = 0;
  v3 = *(_BYTE *)(a2 + 5);
  if ( v3 )
  {
    *(_BYTE *)(a2 + 5) = v3 - 1;
    ApplyAffineAnimFrameRelativeAndUpdateMatrix(v2, a2);
  }
  else
  {
    ApplyAffineAnimFrameAbsolute(v2, a2);
    ApplyAffineAnimFrameRelativeAndUpdateMatrix(v2, (int)&v5);
  }
  return v7;
}
