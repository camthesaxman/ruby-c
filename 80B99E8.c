int __fastcall sub_80B99E8(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *v1 = (int)sub_80B99B4;
  if ( byte_3000718 == 1 )
    sub_80B93B0(*((_WORD *)v1 + 9));
  return v3;
}
