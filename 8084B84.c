signed int wild_pokemon_rand_grass()
{
  unsigned int v0; // r1@1
  signed int result; // r0@2

  v0 = (unsigned __int16)Random() % 0x64u & 0xFF;
  if ( v0 > 0x13 )
  {
    if ( ((v0 - 20) & 0xFF) > 0x13 )
    {
      if ( ((v0 - 40) & 0xFF) > 9 )
      {
        if ( ((v0 - 50) & 0xFF) > 9 )
        {
          if ( ((v0 - 60) & 0xFF) > 9 )
          {
            if ( ((v0 - 70) & 0xFF) > 9 )
            {
              if ( ((v0 - 80) & 0xFF) > 4 )
              {
                if ( ((v0 - 85) & 0xFF) > 4 )
                {
                  if ( ((v0 - 90) & 0xFF) > 3 )
                  {
                    if ( ((v0 - 94) & 0xFF) > 3 )
                    {
                      if ( v0 == 98 )
                        result = 10;
                      else
                        result = 11;
                    }
                    else
                    {
                      result = 9;
                    }
                  }
                  else
                  {
                    result = 8;
                  }
                }
                else
                {
                  result = 7;
                }
              }
              else
              {
                result = 6;
              }
            }
            else
            {
              result = 5;
            }
          }
          else
          {
            result = 4;
          }
        }
        else
        {
          result = 3;
        }
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
