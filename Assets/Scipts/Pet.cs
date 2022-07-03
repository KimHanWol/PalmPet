using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scipts {
    class Pet {
        public string Name { get; set; }
        public int Type { get; set; }
        public int Hungry { get; set; }
        public int Defecation { get; set; }
        public int Walk { get; set; }
        public int Love { get; set; }

        public Pet(string name) {
            this.Name = name;

            PlayerPrefs.SetString("Name", name);
            PlayerPrefs.SetInt("Type", 1);
            PlayerPrefs.SetInt("Hungry", 50);
            PlayerPrefs.SetInt("Defecation", 50);
            PlayerPrefs.SetInt("Walk", 50);
            PlayerPrefs.SetInt("Love", 50);
            PlayerPrefs.Save();

            Type = PlayerPrefs.GetInt("Type", 1);
            Hungry = PlayerPrefs.GetInt("Hungry", 50);
            Defecation = PlayerPrefs.GetInt("Defecation", 50);
            Walk = PlayerPrefs.GetInt("Walk", 50);
            Love = PlayerPrefs.GetInt("Love", 50);
        }
    }
}
