int __fastcall ApplyAffineAnimFrameRelativeAndUpdateMatrix(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  _BYTE *v3; // r4@1
  unsigned int v5; // [sp+0h] [bp-20h]@1
  unsigned int v6; // [sp+4h] [bp-1Ch]@1
  char v7; // [sp+8h] [bp-18h]@1
  int v8; // [sp+1Ch] [bp-4h]@1

  v2 = a1;
  v3 = &sAffineAnimStates[12 * a1];
  *((_WORD *)v3 + 2) += *(_WORD *)a2;
  *((_WORD *)v3 + 3) += *(_WORD *)(a2 + 2);
  *((_WORD *)v3 + 4) = ((*(_BYTE *)(a2 + 4) << 8) + *((_WORD *)v3 + 4)) & 0xFF00;
  v5 = v5 & 0xFFFF0000 | (unsigned __int16)ConvertScaleParam(*((_WORD *)v3 + 2));
  v5 = (unsigned __int16)v5 | (ConvertScaleParam(*((_WORD *)v3 + 3)) << 16);
  v6 = v6 & 0xFFFF0000 | *((_WORD *)v3 + 4);
  ObjAffineSet(&v5, &v7, 1, 2);
  CopyOamMatrix(v2, (int)&v7);
  return v8;
}
