int __fastcall sub_80B48A8(int a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33720468) = *(_BYTE *)(a1 + v1);
    ++v1;
  }
  while ( v1 <= 0x52F );
  v20288A0 = 33721680;
  v20288A4 = 33721725;
  return v3;
}
