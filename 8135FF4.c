int __fastcall sub_8135FF4(int a1)
{
  signed int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 0;
  do
  {
    *(_BYTE *)(a1 + v1) = *(_BYTE *)(v1 + 33706816);
    ++v1;
  }
  while ( v1 <= 6 );
  *(_BYTE *)(a1 + v1) = -1;
  return v3;
}
