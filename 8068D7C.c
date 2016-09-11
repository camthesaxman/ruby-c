int __fastcall trigger_activate(int a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      if ( *(_WORD *)(a1 + 6) )
      {
        if ( (unsigned __int16)VarGet(*(_WORD *)(a1 + 6)) == *(_BYTE *)(a1 + 8) )
          return *(_DWORD *)(v1 + 12);
      }
      else
      {
        script_env_2_execute_new_script(*(_DWORD *)(a1 + 12));
      }
    }
    else
    {
      sub_8069408(*(_BYTE *)(a1 + 6));
    }
  }
  return 0;
}
