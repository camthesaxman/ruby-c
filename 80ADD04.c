int __fastcall sub_80ADD04(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  int (*v3)(); // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v4000008 &= 0xFCu;
  v400000C &= 0xFCu;
  ++v2019205;
  if ( v2019205 == 5 )
  {
    v2 = &dword_3004B20[10 * a1];
    v3 = sub_80ADDA4;
  }
  else
  {
    sub_80B1B14();
    v2 = &dword_3004B20[10 * v1];
    v3 = sub_80ADD74;
  }
  *v2 = (int)v3;
  return v5;
}
