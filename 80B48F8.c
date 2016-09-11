int __fastcall sub_80B48F8(int a1)
{
  int v1; // r6@1
  int v2; // r7@1
  unsigned int v3; // r1@1
  int v4; // r2@1

  v1 = v20288A0;
  v2 = v20288A4;
  v3 = 0;
  v20288A0 = 0;
  v20288A4 = 0;
  v4 = 0;
  do
    v4 += *(_BYTE *)(a1 + v3++);
  while ( v3 <= 0x52B );
  v20288A0 = v1;
  v20288A4 = v2;
  return v4;
}
