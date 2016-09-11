signed int __fastcall task_tutorial_oak_boy_girl(int a1, int a2)
{
  unsigned int v2; // r2@1
  unsigned int v3; // r1@1
  signed int result; // r0@5

  v2 = ((unsigned int)(a1 << 16) >> 24) + 24;
  v3 = (unsigned __int8)gUnknown_08216303[*(_BYTE *)(dword_3004854 + 162 + (2 * a2 & 0x1FF))];
  if ( v2 < v3 || v2 >= v3 + 48 )
  {
    result = 0;
  }
  else if ( v2 < v3 + 20 || v2 >= v3 + 28 )
  {
    result = 1;
  }
  else
  {
    result = 2;
  }
  return result;
}
