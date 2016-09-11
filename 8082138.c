signed int __fastcall sub_8082138(int a1, int a2, int a3)
{
  unsigned int v3; // r4@1
  int v4; // r1@1
  int v5; // r2@1
  signed int result; // r0@2

  v3 = (unsigned __int8)GetMonData((int)&unk_30045C0, 56, a3);
  if ( v3 < (unsigned __int8)sub_8081EF4(1u, v4, v5) )
    result = 4;
  else
    result = 3;
  return result;
}
