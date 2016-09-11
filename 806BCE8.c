int __fastcall sub_806BCE8(int a1, int a2, int a3)
{
  unsigned int i; // r5@1
  int v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  for ( i = 0; i < (unsigned __int8)byte_3004350; i = (i + 1) & 0xFF )
  {
    if ( GetMonData((int)&dword_3004360[25 * i], 45, a3) )
    {
      sub_806BC3C(i, 0x46u);
    }
    else
    {
      v4 = (unsigned __int8)GetMonGender();
      if ( v4 )
      {
        if ( v4 == 254 )
          sub_806BC3C(i, 0x62u);
        else
          sub_806BC3C(i, 0x46u);
      }
      else
      {
        sub_806BC3C(i, 0x54u);
      }
    }
  }
  return v6;
}
