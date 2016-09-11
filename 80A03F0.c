int __fastcall sub_80A03F0(int a1, _BYTE *a2)
{
  int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v2 = (unsigned __int16)sub_80A03BC(a1, *a2);
  if ( v201800B == 2 )
  {
    sub_80A04CC(v2);
    sub_80A057C(0xFFFF);
  }
  else
  {
    sub_80A057C(v2);
  }
  return v4;
}
