int __fastcall sub_80735E4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !((a1 << 16) & 0xF0000) )
    sub_80736B4(((unsigned int)(a1 << 16) >> 20) & 0xFF);
  return v2;
}
