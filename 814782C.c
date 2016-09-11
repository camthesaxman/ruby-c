int __fastcall sub_814782C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !(++*((_WORD *)v2 + 5) % (signed int)*((_WORD *)v2 + 9)) )
  {
    *((_WORD *)v2 + 5) = 0;
    ++*((_WORD *)v2 + 6);
    *((_WORD *)v2 + 8) = -*((_WORD *)v2 + 8);
    SetCameraPanning(0, *((_WORD *)v2 + 8));
    if ( *((_WORD *)v2 + 6) == *((_WORD *)v2 + 10) )
    {
      DestroyTask(v1);
      script_env_2_enable_and_set_ctx_running();
      InstallCameraPanAheadCallback();
    }
  }
  return v4;
}
