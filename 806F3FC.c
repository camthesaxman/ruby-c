int __fastcall sub_806F3FC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_809D9F0(dword_3004360, v201C005, ((unsigned __int8)byte_3004350 - 1) & 0xFF, sub_808B564);
    DestroyTask(v1);
  }
  return v3;
}
