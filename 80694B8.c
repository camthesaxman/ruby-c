int __fastcall sub_80694B8(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (char *)&unk_3004B28 + 40 * a1;
  if ( !(script_env_2_is_enabled() << 24) )
  {
    sub_8069468(v1);
    sub_80540D0((signed __int16 *)v1 + 1, (_WORD *)v1 + 2);
  }
  return v3;
}
