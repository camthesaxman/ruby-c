int __fastcall ZeroBoxMonData(int a1)
{
  unsigned int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = 0;
  do
    *(_BYTE *)(a1 + v1++) = 0;
  while ( v1 <= 0x4F );
  return v3;
}
