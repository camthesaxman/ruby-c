int __fastcall sub_80C4BCC(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( !gReceivedRemoteLinkPlayers )
  {
    DestroyTask(a1);
    script_env_2_disable();
    script_env_2_enable_and_set_ctx_running();
  }
  return v2;
}
