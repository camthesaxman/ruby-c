signed int sub_8125E6C()
{
  signed int v0; // r6@1
  int v1; // r1@1
  unsigned __int16 v2; // r5@1

  v0 = 0;
  v1 = (unsigned __int16)word_3005EB4++ + 1;
  v2 = v1;
  if ( (unsigned __int16)v1 > 4u )
  {
    sub_81257F0(v1);
    v0 = 1;
  }
  else
  {
    sub_812556C((v1 + 1) & 0xFFFF);
    sub_81257F0(v2);
  }
  if ( dword_3005EA8 )
    fullscreen_save_activate(1);
  return v0;
}
