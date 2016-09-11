int __fastcall sub_8098780(int a1, int a2, int a3)
{
  signed int v3; // r4@1
  unsigned int v4; // r5@1
  int v5; // r0@2
  int v7; // [sp+1Ch] [bp-4h]@0

  v3 = 1;
  v4 = 0x10000;
  do
  {
    v5 = GetMonData((int)&dword_3004360[25 * v3], 11, a3) != 0;
    sub_809D104(33554600, 7, v4 >> 16, 33554600);
    v4 += 196608;
    ++v3;
  }
  while ( v3 <= 5 );
  return v7;
}
