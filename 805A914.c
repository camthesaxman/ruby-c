int fishF()
{
  int v0; // r0@2
  int v1; // r0@2
  unsigned __int8 v2; // r0@2

  if ( MenuUpdateWindowText() << 24 )
  {
    v202E85E = 0;
    v0 = script_env_2_disable(0);
    v1 = sub_806451C(v0);
    MenuZeroFillScreen(v1);
    sub_80BE97C(0);
    v2 = FindTaskIdByFunc(sub_805A37C);
    DestroyTask(v2);
  }
  return 0;
}
