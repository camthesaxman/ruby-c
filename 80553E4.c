signed int __fastcall sub_80553E4(int a1)
{
  signed int v1; // r4@1

  v1 = 17;
  if ( (unsigned __int8)script_env_2_is_enabled(a1) != 1 )
  {
    v1 = 26;
    sub_80543DC((int)sub_80553E0);
  }
  return v1;
}
