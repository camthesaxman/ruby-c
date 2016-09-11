signed int __fastcall sub_8083E90(int a1, int a2, int a3)
{
  unsigned int v3; // r5@1
  char v5; // [sp+0h] [bp-14h]@3

  v3 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v3], 45, a3) )
    {
      v5 = 0;
      SetMonData((int)&dword_3004360[25 * v3], 32, (int)&v5);
    }
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 5 );
  v20287EA = -3;
  sub_8071C20();
  return 1;
}
