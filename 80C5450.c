signed int __fastcall sub_80C5450(unsigned __int16 a1, int a2, int a3)
{
  int v3; // r6@1
  signed int v4; // r5@1
  int v5; // r0@2

  v3 = a1;
  v4 = 0;
  do
  {
    v5 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v4], 65, a3);
    if ( v5 && v5 != 412 && GetMonData((int)&dword_3004360[25 * v4], 12, a3) == v3 )
      return 1;
    ++v4;
  }
  while ( v4 <= 5 );
  return 0;
}
